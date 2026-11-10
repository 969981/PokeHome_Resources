/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002cc000; name: FUN_.text__002cc000
 */


uint FUN__text__002cc000(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  ulong local_50;
  byte *pbStack_48;
  size_t local_40;
  undefined8 uStack_38;
  
  local_40 = strlen((char *)param_2);
  bVar1 = *param_2;
  local_50 = 0xcbf29ce484222645;
  pbVar3 = param_2;
  while (bVar1 != 0) {
    pbVar3 = pbVar3 + 1;
    local_50 = (local_50 ^ bVar1) * 0x100000001b3;
    bVar1 = *pbVar3;
  }
  uStack_38 = 0;
  pbStack_48 = param_2;
  uVar2 = FUN__text__002cbde0(param_1,&local_50);
  return uVar2 & 1;
}


