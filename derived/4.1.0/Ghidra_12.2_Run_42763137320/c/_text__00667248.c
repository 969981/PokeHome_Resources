/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00667248; name: FUN_.text__00667248
 */


/* WARNING: Removing unreachable block (ram,0x0066729c) */
/* WARNING: Removing unreachable block (ram,0x006672a4) */

undefined4
FUN__text__00667248(long param_1,int param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = (**(code **)(param_1 + (ulong)(*(int *)(param_1 + 0x25c) == param_2) * 8 + 0x280))();
  uVar1 = 0;
  *param_5 = lVar2;
  if (lVar2 < 0) {
    uVar1 = 0x37;
  }
  return uVar1;
}


