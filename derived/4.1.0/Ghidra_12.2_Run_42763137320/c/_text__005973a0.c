/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005973a0; name: FUN_.text__005973a0
 */


ulong FUN__text__005973a0(uchar *param_1,ulong param_2,ulong param_3,undefined8 *param_4)

{
  size_t __n;
  uchar *puVar1;
  AesDecryptor *__src;
  ulong uVar2;
  ulong uVar3;
  AesDecryptor *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  uchar auStack_140 [16];
  size_t local_130;
  undefined4 local_128;
  AesDecryptor aAStack_120 [176];
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar2 = 0;
  if (((((param_2 & 0xf) == 0) && (param_4 != (undefined8 *)0x0)) && (param_2 != 0)) &&
     ((param_1 != (uchar *)0x0 && (param_3 != 0)))) {
    nn::crypto::detail::AesImpl<16ul>::Initialize(aAStack_120,param_3,true);
    uStack_150 = *param_4;
    local_148 = param_4[1];
    local_130 = 0;
    local_128 = 1;
    local_158 = aAStack_120;
    if (0xf < param_2) {
      uVar2 = param_2 >> 4;
      do {
        local_70 = *(undefined8 *)param_1;
        uStack_68 = *(undefined8 *)(param_1 + 8);
        if ((local_130 & 0xfffffffffffffff0) - 1 < 0xffffffffffffffee ||
            (local_130 & 0xfffffffffffffff0) == 0xffffffffffffffef) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl();
        }
        puVar1 = param_1;
        if (local_130 == 0) {
          __src = (AesDecryptor *)&local_70;
LAB__text__00597488:
          nn::crypto::detail::CbcModeImpl<nn::crypto::AesDecryptor<16ul>>::DecryptBlocks
                    (puVar1,(uchar *)&uStack_150,(uchar *)__src,1,local_158);
        }
        else {
          uVar3 = 0x10 - local_130;
          __n = uVar3;
          if (0xf < uVar3) {
            __n = 0x10;
          }
          memcpy(auStack_140 + local_130,&local_70,__n);
          local_130 = local_130 + __n;
          if (local_130 == 0x10) {
            nn::crypto::detail::CbcModeImpl<nn::crypto::AesDecryptor<16ul>>::DecryptBlocks
                      (param_1,(uchar *)&uStack_150,auStack_140,1,local_158);
            puVar1 = param_1 + 0x10;
            local_130 = 0;
          }
          __src = aAStack_120 + __n + 0xb0;
          if (__n == 0) goto LAB__text__00597488;
          if (uVar3 < 0x10) {
            local_130 = 0x10 - __n;
            memcpy(auStack_140,__src,local_130);
          }
        }
        param_1 = param_1 + 0x10;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    uVar2 = param_2 & 0xfffffffffffffff0;
    nn::crypto::detail::ClearMemory(&local_158,0x38);
    nn::crypto::detail::AesImpl<16ul>::~AesImpl((AesImpl<16ul> *)aAStack_120);
  }
  return uVar2;
}


