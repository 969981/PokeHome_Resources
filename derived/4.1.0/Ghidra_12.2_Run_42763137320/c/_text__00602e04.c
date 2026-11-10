/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00602e04; name: FUN_.text__00602e04
 */


bool FUN__text__00602e04(undefined8 param_1,undefined8 param_2,undefined2 param_3,ulong param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_20;
  undefined2 local_18;
  
  uVar2 = (undefined4)(0x700050403020100 >> ((param_4 & 7) << 3));
  if ((param_4 & 0xf8) != 0) {
    uVar2 = 0;
  }
  local_20 = param_2;
  local_18 = param_3;
  iVar1 = FUN__text__00603450(param_1,0xd,&local_20,10,uVar2,0);
  return iVar1 != 0;
}


