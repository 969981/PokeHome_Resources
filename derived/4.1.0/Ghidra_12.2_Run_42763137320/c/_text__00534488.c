/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00534488; name: FUN_.text__00534488
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00534488(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_60 [48];
  
  lVar1 = FUN__text__0050c2a0(param_2,*(undefined8 *)
                                       (*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x38) +
                                       0x68));
  lVar3 = _DAT_008a40c0;
  if (lVar1 != 0) {
    FUN__text__00536c78(*(undefined4 *)(_DAT_008a40c0 + 0x18),*(undefined4 *)(_DAT_008a40c0 + 0x18),
                        auStack_60,*_DAT_008a40c8,*(undefined4 *)(_DAT_008a40c0 + 0xc),
                        *(undefined4 *)(_DAT_008a40c0 + 0x10));
    FUN__text__0053a4dc(auStack_60,*(undefined4 *)(lVar3 + 0x14));
    FUN__text__0053a4e4(auStack_60,*(undefined1 *)(lVar3 + 0x24));
    uVar2 = FUN__text__0050c2e0(param_2,**(undefined8 **)(param_1 + 0x30));
    lVar3 = *(long *)(param_1 + 0x30);
    *(undefined4 *)(lVar3 + 0x78) = 0;
    *(undefined4 *)(lVar3 + 0x50) = 0;
    *(undefined4 *)(lVar3 + 0x60) = 0;
    *(undefined4 *)(lVar3 + 0x30) = 0;
    *(undefined8 *)(lVar3 + 0x68) = 0xffffffffffffffff;
    *(undefined8 *)(lVar3 + 0x70) = 0xffffffffffffffff;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    (**(code **)(*(long *)(lVar3 + 8) + 0x10))();
    uVar4 = FUN__text__00532f00(*(undefined8 *)(param_1 + 0x38),lVar1,
                                *(undefined8 *)(param_1 + 0x30),uVar2);
    if ((uVar4 & 1) != 0) {
      FUN__text__0053a044(auStack_60,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30)
                          ,uVar2,lVar1);
    }
    FUN__text__0052c540(*(long *)(param_1 + 0x30) + 8,uVar2,0);
    *(undefined4 *)(*(long *)(param_1 + 0x30) + 300) =
         *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x128);
    *(undefined1 *)(param_1 + 0x40) = 1;
    FUN__text__00536cac(auStack_60);
  }
  return;
}


