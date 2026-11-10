/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066fa80; name: FUN_.text__0066fa80
 */


undefined8
FUN__text__0066fa80(undefined8 param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  ulong local_28;
  undefined8 local_8;
  
  local_8 = 0;
  if (-1 < param_3) {
    local_28 = 0;
    iVar1 = FUN__text__0066fafc(param_1,param_2,param_3,&local_8,&local_28,0);
    if (iVar1 == 0) {
      if (param_4 != (undefined4 *)0x0) {
        if (local_28 >> 0x1f == 0) {
          uVar2 = FUN__text__00678264();
          *param_4 = uVar2;
        }
        else {
          FUN__text__006783e4(local_8);
          local_8 = 0;
        }
      }
      return local_8;
    }
  }
  return 0;
}


