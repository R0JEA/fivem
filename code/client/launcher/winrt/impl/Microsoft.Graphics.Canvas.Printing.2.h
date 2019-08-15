﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.190111.3

#pragma once
#include "winrt/impl/Microsoft.Graphics.Canvas.1.h"
#include "winrt/impl/Windows.Graphics.Printing.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.Printing.1.h"

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::Printing {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::Printing {

struct WINRT_EBO CanvasPreviewEventArgs :
    Microsoft::Graphics::Canvas::Printing::ICanvasPreviewEventArgs
{
    CanvasPreviewEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CanvasPrintDeferral :
    Microsoft::Graphics::Canvas::Printing::ICanvasPrintDeferral
{
    CanvasPrintDeferral(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CanvasPrintDocument :
    Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument
{
    CanvasPrintDocument(std::nullptr_t) noexcept {}
    CanvasPrintDocument();
    CanvasPrintDocument(Microsoft::Graphics::Canvas::CanvasDevice const& device);
};

struct WINRT_EBO CanvasPrintEventArgs :
    Microsoft::Graphics::Canvas::Printing::ICanvasPrintEventArgs
{
    CanvasPrintEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CanvasPrintTaskOptionsChangedEventArgs :
    Microsoft::Graphics::Canvas::Printing::ICanvasPrintTaskOptionsChangedEventArgs
{
    CanvasPrintTaskOptionsChangedEventArgs(std::nullptr_t) noexcept {}
};

}
