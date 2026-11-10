/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00661854; name: FUN_.text__00661854
 */


undefined1 FUN__text__00661854(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  size_t sVar4;
  char *__s;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(param_1 + 0xc28);
  bVar1 = 4 < param_3;
  do {
    if (puVar5 == (undefined8 *)0x0) {
      uVar2 = 2;
LAB__text__006618c8:
      if (4 < param_3) {
        param_3 = 5;
      }
      iVar3 = thunk_FUN__text__0066c2d8(0x71c634,param_2,param_3);
      if (iVar3 != 0) {
        uVar2 = bVar1;
      }
      return uVar2;
    }
    __s = (char *)*puVar5;
    sVar4 = strlen(__s);
    if (param_3 <= sVar4) {
      sVar4 = param_3;
    }
    iVar3 = thunk_FUN__text__0066c2d8(__s,param_2,sVar4);
    if (iVar3 != 0) {
      if (4 < param_3) {
        return 1;
      }
      uVar2 = 0;
      goto LAB__text__006618c8;
    }
    puVar5 = (undefined8 *)puVar5[1];
  } while( true );
}


