/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006511e0; name: FUN_.text__006511e0
 */


void FUN__text__006511e0(long param_1,undefined8 *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar3 = param_2[0xcc];
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x1100);
    if (((param_3 & 1) != 0) && (*(long *)(param_1 + 0xe8) != 0)) {
      FUN__text__00667a44(param_1,5,2);
    }
    FUN__text__006512cc(lVar3,param_2);
    if ((*(long *)(lVar3 + 8) == 0) && (lVar2 != 0)) {
      local_58 = 0;
      local_50 = 0;
      uStack_48 = 0;
      FUN__text__0065425c(lVar2,&local_58);
      do {
        lVar1 = FUN__text__0065426c(&local_58);
        if (lVar1 == 0) goto LAB__text__00651240;
      } while (*(long *)(lVar1 + 0x18) != lVar3);
      FUN__text__00653f90(lVar2,lVar1 + 0x28,*(undefined8 *)(lVar1 + 0x20));
    }
LAB__text__00651240:
    param_2[0xcc] = 0;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x30) = *(long *)(lVar2 + 0x30) + -1;
    }
    *param_2 = 0;
    if (((param_3 & 1) != 0) && (*(long *)(param_1 + 0xe8) != 0)) {
      FUN__text__00667a8c(param_1,5);
    }
  }
  return;
}


