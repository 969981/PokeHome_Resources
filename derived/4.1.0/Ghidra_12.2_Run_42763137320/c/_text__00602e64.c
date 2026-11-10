/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00602e64; name: FUN_.text__00602e64
 */


bool FUN__text__00602e64(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  local_12 = (undefined1)((ulong)param_2 >> 0x30);
  local_18 = (undefined4)param_2;
  local_14 = (undefined2)((ulong)param_2 >> 0x20);
  uVar2 = (undefined4)(0x700050403020100 >> ((param_3 & 7) << 3));
  if ((param_3 & 0xf8) != 0) {
    uVar2 = 0;
  }
  iVar1 = FUN__text__00603450(param_1,0xd,&local_18,7,uVar2,0);
  return iVar1 != 0;
}


