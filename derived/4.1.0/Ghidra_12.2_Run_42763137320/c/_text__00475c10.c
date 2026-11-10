/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00475c10; name: FUN_.text__00475c10
 */


void FUN__text__00475c10(long param_1,long param_2,ulong param_3)

{
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  uint uStack_3c;
  long local_38;
  
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN__text__00458920();
  }
  if (*(int *)(param_2 + 0x148) != 0) {
    local_50 = *(undefined8 *)(param_1 + 0x360);
    uStack_60 = *(undefined8 *)(param_1 + 0x350);
    local_58 = *(undefined4 *)(param_1 + 0x358);
    local_68 = *(undefined8 *)(param_1 + 0x20);
    local_48 = *(undefined4 *)(param_1 + 0x30);
    uStack_44 = *(undefined4 *)(param_1 + 0x280);
    uStack_3c = 1;
    if ((param_3 & 1) == 0) {
      uStack_3c = 2;
    }
    local_40 = *(undefined4 *)(param_1 + 0x330);
    uStack_3c = uStack_3c & *(int *)(param_1 + 0x313) >> 0x1f;
    local_38 = param_1;
    FUN__text__0046ce30(DAT_00ae9a90,param_2,&local_68,(long *)(param_1 + 0x90));
  }
  return;
}


