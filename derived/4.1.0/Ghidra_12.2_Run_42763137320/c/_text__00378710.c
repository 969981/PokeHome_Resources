/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00378710; name: FUN_.text__00378710
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00378710(long param_1)

{
  undefined8 uVar1;
  undefined8 local_38;
  void *pvStack_30;
  undefined4 local_24;
  
  memset((void *)(param_1 + 0x60),0,0x2b0);
  *(undefined8 *)(param_1 + 0x318) = 0;
  *(undefined8 *)(param_1 + 0x310) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined2 *)(param_1 + 0x348) = 0;
  local_24 = 1;
  uVar1 = FUN__text__00371260(*_DAT_0089f448,&local_24);
  local_38 = 0x2ec;
  pvStack_30 = (void *)(param_1 + 0x60);
  FUN__text__003787b0(uVar1,_DAT_008a3070,&pvStack_30,&local_38);
  return;
}


