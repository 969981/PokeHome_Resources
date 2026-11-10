/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00651324; name: FUN_.text__00651324
 */


undefined8 FUN__text__00651324(long param_1,long param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (param_2 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0xe8) != 0) {
    FUN__text__00667a44(param_1,5,2);
  }
  local_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN__text__0065425c(param_2,&local_58);
  lVar2 = FUN__text__0065426c(&local_58);
  if (lVar2 != 0) {
    do {
      lVar4 = *(long *)(lVar2 + 0x18);
      lVar2 = FUN__text__0065426c(&local_58);
      puVar5 = *(undefined8 **)(lVar4 + 0x10);
      while (puVar5 != (undefined8 *)0x0) {
        uVar3 = *puVar5;
        puVar5 = (undefined8 *)puVar5[2];
        uVar3 = (*param_4)(uVar3,param_3);
        if ((int)uVar3 == 1) {
          uVar1 = 1;
          if (*(long *)(param_1 + 0xe8) == 0) {
            return uVar3;
          }
          goto LAB__text__006513ec;
        }
      }
    } while (lVar2 != 0);
  }
  uVar3 = 0;
  uVar1 = 0;
  if (*(long *)(param_1 + 0xe8) != 0) {
LAB__text__006513ec:
    uVar3 = uVar1;
    FUN__text__00667a8c(param_1,5);
  }
  return uVar3;
}


