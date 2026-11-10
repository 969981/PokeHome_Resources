/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051c6f4; name: FUN_.text__0051c6f4
 */


undefined8 FUN__text__0051c6f4(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  char local_14 [3];
  undefined1 uStack_11;
  
  uVar2 = *(undefined8 *)param_2[1];
  lVar1 = FUN__text__0051db90(param_1,uVar2,&uStack_11);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = param_2[1];
    lVar1 = FUN__text__0051c7a0(lVar1,*param_2,local_14);
    if (lVar1 == 0) {
      FUN__text__0051c980(param_1,uVar2);
      return 0;
    }
    if (local_14[0] == '\0') {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      return 1;
    }
  }
  return 0;
}


