/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001aaaf4; name: FUN_.text__001aaaf4
 */


void FUN__text__001aaaf4(long param_1,char *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (**(int **)(param_1 + 0x38) == 1) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = FUN__text__00196200(uVar3,*(undefined4 *)(param_2 + 4));
    if (*param_2 == '\0') {
      lVar2 = FUN__text__00195358(uVar3,param_2);
      local_40 = *(undefined8 *)(lVar2 + 8);
      uStack_38 = *(undefined8 *)(lVar2 + 0x10);
      lVar2 = FUN__text__00192680(uVar1,&local_40);
    }
    else {
      lVar2 = FUN__text__0019264c(uVar1,param_2 + 0xc);
    }
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x18) = 0;
    }
  }
  return;
}


