/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00539444; name: FUN_.text__00539444
 */


undefined1  [16]
FUN__text__00539444(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  *param_1 = param_3;
  local_48 = *(undefined8 *)(param_2 + 0xe8);
  uStack_40 = *(undefined8 *)(param_2 + 0xf0);
  local_38 = *(undefined8 *)(param_2 + 0xf8);
  uVar1 = FUN__text__00509838(param_2);
  FUN__text__005394c0(param_1,&local_48,param_2 + 0x58,uVar1,*(undefined4 *)((long)param_1 + 0x1c),
                      param_4);
  return ZEXT816(0);
}


