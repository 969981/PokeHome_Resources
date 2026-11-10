/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004069b8; name: FUN_.text__004069b8
 */


undefined8 FUN__text__004069b8(long param_1,undefined1 *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  *param_2 = 0;
  uVar1 = *(uint *)(param_1 + 0x60) >> 8 & 0xf;
  if ((uVar1 < 4) && (((*(uint *)(param_1 + 0x60) & 0xff) != 0 || (uVar1 == 3)))) {
    if ((*(char *)(param_1 + 0x554) != '\0') && (*(long *)(param_1 + 0x548) == 0)) {
      FUN__text__0045cc78(auStack_38,*(undefined8 *)(param_1 + 0x28));
      lVar3 = FUN__text__00416430(auStack_38);
      *(long *)(param_1 + 0x548) = lVar3;
      if (lVar3 == 0) {
        *param_2 = 1;
        lVar3 = FUN__text__00400f80(5,0x1c0);
        if (lVar3 == 0) {
          *(undefined8 *)(param_1 + 0x548) = 0;
          FUN__text__0045cca8(auStack_38);
          return 0;
        }
        FUN__text__004d3e64();
        *(undefined4 *)(lVar3 + 0x1b8) = 0xffffffff;
        *(byte *)(lVar3 + 0x1bc) = *(byte *)(lVar3 + 0x1bc) & 0xe8;
        *(long *)(param_1 + 0x548) = lVar3;
        FUN__text__0045cc84(auStack_50,auStack_38);
        iVar2 = FUN__text__00416d54(lVar3,auStack_50,0);
        FUN__text__0045cca8(auStack_50);
        if (iVar2 != 1) {
          FUN__text__00406af0(5,*(undefined8 *)(param_1 + 0x548));
          *(undefined8 *)(param_1 + 0x548) = 0;
        }
      }
      FUN__text__0045cca8(auStack_38);
    }
    *(undefined1 *)(param_1 + 0x554) = 1;
  }
  return *(undefined8 *)(param_1 + 0x548);
}


