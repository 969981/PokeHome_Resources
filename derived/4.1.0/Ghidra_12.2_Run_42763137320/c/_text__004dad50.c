/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004dad50; name: FUN_.text__004dad50
 */


undefined8
FUN__text__004dad50(long param_1,undefined8 param_2,long *param_3,undefined4 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  FUN__text__004d920c(param_1 + 0x10,param_5,param_4);
  *(undefined1 *)(param_1 + 200) = 0;
  *(undefined2 *)(param_1 + 0xca) = 0;
  *(undefined1 *)(param_1 + 0xcc) = 0;
  lVar3 = *(long *)(param_5 + 8);
  lVar2 = 0;
  if (lVar3 != 0) {
    lVar2 = lVar3 + -0x18;
  }
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar2 + 0x18;
  }
  lVar2 = FUN__text__0042b3dc(param_1 + 0x38,*param_3,lVar1);
  if (lVar2 == 0) {
    return 2;
  }
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(*param_3 + 0x30);
  return 1;
}


