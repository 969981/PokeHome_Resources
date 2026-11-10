/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064fda0; name: FUN_.text__0064fda0
 */


undefined8 FUN__text__0064fda0(long param_1,undefined1 *param_2,ulong *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  int *piVar4;
  
  if ((*(char *)(param_1 + 1) == '\x02') &&
     (lVar1 = FUN__text__00656948(2,param_1 + 4,param_2,0x2e), lVar1 != 0)) {
    uVar2 = nnsocketInetNtohs(*(undefined2 *)(param_1 + 2));
    uVar3 = 1;
    *param_3 = uVar2 & 0xffff;
  }
  else {
    *param_2 = 0;
    *param_3 = 0;
    piVar4 = __errno_location();
    uVar3 = 0;
    *piVar4 = 0x61;
  }
  return uVar3;
}


