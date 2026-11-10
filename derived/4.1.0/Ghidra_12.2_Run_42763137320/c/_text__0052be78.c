/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0052be78; name: FUN_.text__0052be78
 */


void FUN__text__0052be78(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  
  if (*(char *)(param_1 + 0x29) == '\0') {
    *(undefined4 *)(param_1 + 0x38) = 0;
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  if (uVar1 < 2) {
    if ((*(int *)(param_1 + 0x3c) == 0) &&
       (uVar2 = FUN__text__00530820((undefined8 *)(param_1 + 0x30),1), (uVar2 & 1) == 0)) {
      return;
    }
    if ((uVar1 == 0) && (puVar3 = *(undefined4 **)(param_1 + 0x30), puVar3 != (undefined4 *)0x0)) {
      *puVar3 = 0;
      memset(puVar3 + 2,0,0x108);
      puVar3[0x44] = 0x42c80000;
      *(undefined8 *)(puVar3 + 0x4e) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x52) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x54) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x56) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x5a) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x5c) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x5e) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x60) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x62) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 100) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x66) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x68) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x6a) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x6c) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x45) = 0;
      *(undefined8 *)(puVar3 + 0x47) = 0;
      *(undefined8 *)(puVar3 + 0x49) = 0;
      *(undefined8 *)(puVar3 + 0x4b) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x38) = 1;
  return;
}


