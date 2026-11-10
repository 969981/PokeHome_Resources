/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002bde8c; name: FUN_.text__002bde8c
 */


int FUN__text__002bde8c(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 local_38;
  long local_18;
  
  FUN__text__002b1fb0(&local_18,DAT_008e1610);
  local_38 = 0x957027cef224ca8e;
  uVar1 = FUN__text__002a7bc0(local_18,&local_38);
  local_38 = 0xe6ed570e06924515;
  uVar2 = FUN__text__002a7bc0(local_18,&local_38);
  local_38 = 0xcc69d385f67c6dc8;
  uVar3 = FUN__text__002a7bc0(local_18,&local_38);
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  return (uVar1 & 1) + (uVar2 & 1) + (uVar3 & 1);
}


