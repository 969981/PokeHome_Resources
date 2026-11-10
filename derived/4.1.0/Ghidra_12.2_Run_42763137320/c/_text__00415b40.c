/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00415b40; name: FUN_.text__00415b40
 */


void FUN__text__00415b40(long param_1,long param_2,long param_3,undefined4 param_4)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 uStack_21;
  
  lVar4 = *(long *)(param_3 + 0x30);
  do {
    if (lVar4 == 0) {
      FUN__text__0045cd28(auStack_58,param_1,param_2);
      lVar4 = 0;
      bVar6 = 1;
      bVar5 = 1;
      lVar2 = FUN__text__0045cdec(auStack_58);
joined_r0x00415b94:
      if (lVar2 == param_2) {
        FUN__text__0045cc84(auStack_70,auStack_58);
        lVar4 = FUN__text__004164a0(auStack_70,&uStack_21);
        FUN__text__0045cca8(auStack_70);
        bVar5 = bVar6;
      }
      bVar1 = (bool)(bVar5 ^ 1);
      if (lVar4 == 0) {
        bVar1 = true;
      }
      if (!bVar1) {
        FUN__text__0045b1a0(param_3,lVar4,param_4);
      }
      FUN__text__0045cca8(auStack_58);
      return;
    }
    plVar3 = (long *)FUN__text__0045c1d8(lVar4);
    if (*plVar3 == param_1) {
      FUN__text__0045c1d8(lVar4);
      lVar2 = FUN__text__0045cdec();
      if (lVar2 == param_2) {
        lVar4 = *(long *)(lVar4 + 0x158);
        if ((*(byte *)(lVar4 + 0x1bc) >> 4 & 1) == 0) {
          return;
        }
        FUN__text__0045cc44(auStack_58,param_1,*(undefined8 *)(lVar4 + 0x78));
        bVar6 = 0;
        bVar5 = 0;
        lVar2 = FUN__text__0045cdec(auStack_58);
        goto joined_r0x00415b94;
      }
    }
    lVar4 = *(long *)(lVar4 + 0x20);
  } while( true );
}


