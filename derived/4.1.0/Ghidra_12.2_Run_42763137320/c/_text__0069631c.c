/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069631c; name: FUN_.text__0069631c
 */


ulong FUN__text__0069631c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_50 = 0;
  uStack_48 = 0;
  FUN__text__006ebbe4(&local_50);
  local_50 = CONCAT44(8,(undefined4)local_50);
  lVar1 = FUN__text__006ec37c(param_1,&local_50);
  local_50 = 0;
  uStack_48 = 0;
  FUN__text__006ebbe4(&local_50);
  local_50 = CONCAT44(0x10,(undefined4)local_50);
  lVar2 = FUN__text__006ec37c(param_1,&local_50);
  local_50 = 0;
  uStack_48 = 0;
  FUN__text__006ebbe4(&local_50);
  local_50 = CONCAT44(0x10,(undefined4)local_50);
  lVar3 = FUN__text__006ec37c(param_1,&local_50);
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN__text__006ebc14(&local_50);
  lVar4 = FUN__text__006ee668(param_1,&local_50);
  return (((lVar1 + 0x6fU & -lVar1) + lVar2 + 0xb & -lVar2) + lVar3 + 3 & -lVar3) + lVar4 + 3 &
         -lVar4;
}


