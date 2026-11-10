/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f0374; name: FUN_.text__004f0374
 */


void FUN__text__004f0374(long param_1)

{
  undefined4 uVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  
  FUN__text__004ebc10();
  local_30 = 0;
  local_50 = 0xff00;
  local_28 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_58 = FUN__text__004ec6d4(*(undefined8 *)(param_1 + 0x10));
  uVar1 = FUN__text__004ed5a0(*(undefined8 *)(param_1 + 0x10));
  uStack_38 = CONCAT44(uVar1,(undefined4)uStack_38);
  local_2c = 1;
  (**(code **)(**(long **)(param_1 + 0x80) + 0x148))
            (*(long **)(param_1 + 0x80),&local_58,param_1 + 0x90,1);
  if ((*(byte *)(param_1 + 0xac) & 1) == 0) {
    FUN__text__004f0410(param_1);
    *(byte *)(param_1 + 0xac) = *(byte *)(param_1 + 0xac) | 1;
  }
  return;
}


