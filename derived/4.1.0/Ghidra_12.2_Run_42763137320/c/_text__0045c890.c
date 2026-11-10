/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045c890; name: FUN_.text__0045c890
 */


undefined8 FUN__text__0045c890(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar3 = *(uint *)(param_1 + 0x120);
  uVar1 = *(int *)(param_1 + 0x124) + param_2;
  lVar4 = param_1;
  if ((uVar1 < 2) || (lVar4 = FUN__text__00400f90(0,(ulong)uVar1 * 0x118,8), uVar5 = 0, lVar4 != 0))
  {
    lVar6 = *(long *)(param_1 + 0x118);
    if ((lVar6 != 0) && (lVar6 != lVar4)) {
      if (uVar3 != 0) {
        lVar6 = 0;
        do {
          FUN__text__0045b8c8(lVar4 + lVar6);
          FUN__text__0045ba54(lVar4 + lVar6,*(long *)(param_1 + 0x118) + lVar6);
          lVar2 = *(long *)(param_1 + 0x118) + lVar6;
          FUN__text__0045cc00(lVar2 + 0xe8);
          FUN__text__00451d7c(lVar2 + 0xc0);
          FUN__text__00451cdc(lVar2 + 0xc0);
          if (*(long *)(lVar2 + 0x80) != 0) {
            *(undefined4 *)(lVar2 + 0x88) = 0;
            (**(code **)(**(long **)(lVar2 + 0x78) + 0x18))();
            *(undefined8 *)(lVar2 + 0x80) = 0;
            *(undefined4 *)(lVar2 + 0x8c) = 0;
          }
          if ((*(long *)(lVar2 + 0xa0) != 0) && (*(char *)(lVar2 + 0xa8) != '\0')) {
            (**(code **)(**(long **)(lVar2 + 0x98) + 0x18))();
            *(undefined1 *)(lVar2 + 0xa8) = 0;
          }
          lVar6 = lVar6 + 0x118;
          *(undefined8 *)(lVar2 + 0xa0) = 0;
        } while ((ulong)uVar3 * 0x118 != lVar6);
        lVar6 = *(long *)(param_1 + 0x118);
      }
      if (lVar6 != param_1) {
        FUN__text__00400fc0(0);
      }
    }
    uVar5 = 1;
    *(long *)(param_1 + 0x118) = lVar4;
    *(uint *)(param_1 + 0x124) = uVar1;
  }
  return uVar5;
}


