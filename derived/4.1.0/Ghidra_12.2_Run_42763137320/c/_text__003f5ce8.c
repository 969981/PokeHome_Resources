/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f5ce8; name: FUN_.text__003f5ce8
 */


void FUN__text__003f5ce8(undefined4 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)FUN__text__00400f80(7,0x38);
  if (puVar4 != (undefined4 *)0x0) {
    if (param_2 == (undefined8 *)0x0) {
      *(byte *)(puVar4 + 0xd) = *(byte *)(puVar4 + 0xd) & 0xfc;
    }
    else {
      *(byte *)(puVar4 + 0xd) = *(byte *)(puVar4 + 0xd) & 0xfc | 2;
      *(undefined8 *)(puVar4 + 2) = *param_2;
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[4];
      *(undefined8 *)(puVar4 + 8) = param_2[3];
      *(undefined8 *)(puVar4 + 10) = uVar3;
      *(undefined8 *)(puVar4 + 4) = uVar1;
      *(undefined8 *)(puVar4 + 6) = uVar2;
    }
    *puVar4 = param_1;
    puVar4[0xc] = param_3;
  }
  return;
}


