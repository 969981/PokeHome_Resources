/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047dd5c; name: FUN_.text__0047dd5c
 */


void FUN__text__0047dd5c(ulong param_1,uint param_2,long param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  
  uVar4 = FUN__text__0045c058(param_3);
  if ((uVar4 & 0xf00) == 0x300) {
    uVar4 = *(uint *)(param_4 + 0xc0);
    if ((*(uint *)(param_4 + 0xb8) & 0xf00) != 0x300) {
      uVar4 = *(uint *)(param_4 + 0xb8);
    }
    FUN__text__00484580(param_2,uVar4,*(undefined8 *)(param_4 + 0xf8));
    return;
  }
  if (*(char *)(param_4 + 0x6c) == '\0') {
    if (((param_1 & 1) == 0) && ((*(byte *)(param_3 + 0x198) >> 1 & 1) == 0)) {
      uVar4 = *(uint *)(param_4 + 0xc0);
      if ((*(uint *)(param_4 + 0xb8) & 0xf00) != 0x300) {
        uVar4 = *(uint *)(param_4 + 0xb8);
      }
      lVar5 = (ulong)((uVar4 & 0xff) + 3 & 0x1fc) * (ulong)(*(uint *)(param_4 + 0xc0) & 0xff);
      if ((int)lVar5 != 0) {
        memcpy(*(void **)(param_4 + 0xf8),*(void **)(param_4 + 0x100),lVar5 * 4);
        return;
      }
    }
    else {
      FUN__text__0045c1d8(param_3);
      lVar5 = FUN__text__0040a740();
      if (lVar5 != 0) {
        uVar4 = *(uint *)(param_4 + 0xc0);
        if ((*(uint *)(param_4 + 0xb8) & 0xf00) != 0x300) {
          uVar4 = *(uint *)(param_4 + 0xb8);
        }
        FUN__text__00485210(*(undefined4 *)(param_4 + 0x5c),*(undefined4 *)(param_4 + 0x60),
                            *(undefined4 *)(param_4 + 100),*(undefined4 *)(param_4 + 0x58),
                            *(undefined1 *)(param_4 + 0x6d),param_2,uVar4,
                            *(undefined8 *)(param_4 + 0xf8),lVar5 + 200);
        return;
      }
    }
  }
  else {
    FUN__text__0045c1d8(param_3);
    lVar5 = FUN__text__0040a740();
    if (lVar5 != 0) {
      uVar1 = param_2 >> 0xc & 0x637;
      uVar4 = uVar1 - (uVar1 >> 1 & 0xf1f1f1f1);
      uVar4 = (uVar4 & 0x33333333) + (uVar4 >> 2 & 0x33333333);
      uVar2 = param_2;
      if ((param_2 & 0xf00) == 0x100) {
        uVar2 = uVar1 << 0xc | (uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 | 0x100;
      }
      uVar4 = *(uint *)(param_4 + 0xc0);
      if ((*(uint *)(param_4 + 0xb8) & 0xf00) != 0x300) {
        uVar4 = *(uint *)(param_4 + 0xb8);
      }
      uVar1 = uVar4 & 0xff;
      uVar3 = (uVar1 * 4 + 0xc & 0x7f0) * (param_2 & 0xff);
      memset(*(void **)(param_4 + 0xf8),0,(ulong)uVar3);
      if ((uVar2 & 0xff) != 0) {
        FUN__text__0047dfb0(param_4 + 0x58,param_4 + 0x28,1,param_2,uVar2,uVar4,uVar3 >> 2,
                            lVar5 + 200,*(undefined8 *)(param_4 + 0xf8));
      }
      if (((param_2 >> 0xf & 1) != 0) && ((uVar4 >> 0xf & 1) != 0)) {
        *(undefined4 *)
         (*(long *)(param_4 + 0xf8) + (ulong)((uVar1 + 3 & 0x1fc) * ((param_2 & 0xff) - 1)) * 4 +
         (long)(int)(uVar1 - 1) * 4) = 0x3f800000;
      }
    }
  }
  return;
}


