﻿#pragma once
#include "NvEncoder.h"

namespace WebRTC {
    class NvEncoderD3D11 : public NvEncoder {
    public:
        NvEncoderD3D11(uint32_t nWidth, uint32_t nHeight, IGraphicsDevice* device);
        virtual ~NvEncoderD3D11();
    protected:
        virtual void* AllocateInputBuffer() override;
        virtual ITexture2D* CreateTexture2DFromInputBuffer(void* buffer) override;
    };
}