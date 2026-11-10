/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a5b3c; name: FUN_.text__003a5b3c
 */


void FUN__text__003a5b3c(long param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auVar1 [16];
  undefined8 local_30;
  undefined8 local_28;
  
  *(undefined4 *)(param_1 + 0x290) = param_4;
  *(undefined1 *)(param_1 + 0x481) = 0;
  *(undefined4 *)(param_1 + 0xa0) = param_3;
  FUN__text__003a55f4();
  FUN__text__003a5970(param_1);
  if (param_2 < 4) {
                    /* WARNING: Could not emulate address calculation at 0x003a5b84 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)*(byte *)((ulong)param_2 + 0x73a77d) * 4 + 0x3a5b90))();
    return;
  }
  local_28 = 0xf5b55dbe1ff7ef6a;
  local_30 = *(undefined8 *)(param_1 + 0x88);
  (**(code **)(**(long **)(param_1 + 0x98) + 0xe0))(*(long **)(param_1 + 0x98),&local_30,&local_28);
  local_30 = *(undefined8 *)(param_1 + 0x88);
  auVar1 = (**(code **)(**(long **)(param_1 + 0x98) + 0x30))(*(long **)(param_1 + 0x98),&local_30);
  *(undefined4 *)(param_1 + 0x280) = 1;
  *(undefined1 (*) [16])(param_1 + 0x1e0) = auVar1;
  FUN__text__003a1648(param_1,1);
  return;
}


