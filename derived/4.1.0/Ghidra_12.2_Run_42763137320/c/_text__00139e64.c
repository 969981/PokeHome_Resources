/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00139e64; name: FUN_.text__00139e64
 */


void FUN__text__00139e64(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_58;
  
  if (*(int *)(param_1 + 0x64c) == 1) {
    lVar2 = (param_2 & 0xffffffff) * 8;
    local_58 = *(undefined8 *)(lVar2 + 0x7225c0);
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_58);
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_58 = *(undefined8 *)(lVar2 + 0x7225f8);
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_58);
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_58 = *(undefined8 *)(lVar2 + 0x722630);
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_58);
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_58 = *(undefined8 *)(lVar2 + 0x721af0);
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_58);
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_58 = *(undefined8 *)(lVar2 + 0x7226d8);
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_58);
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_58 = *(undefined8 *)(lVar2 + 0x722668);
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_58);
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_58 = *(undefined8 *)(lVar2 + 0x722710);
  }
  else {
    if (*(int *)(param_1 + 0x64c) != 0) {
      return;
    }
    lVar2 = (param_2 & 0xffffffff) * 8;
    local_58 = *(undefined8 *)(lVar2 + 0x721dc8);
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_58);
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_58 = *(undefined8 *)(lVar2 + 0x7222a0);
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_58);
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_58 = *(undefined8 *)(lVar2 + 0x7222f8);
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_58);
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_58 = *(undefined8 *)(lVar2 + 0x722350);
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_58);
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_58 = *(undefined8 *)(lVar2 + 0x7223a8);
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_58);
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_58 = *(undefined8 *)(lVar2 + 0x722458);
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_58);
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_58 = *(undefined8 *)(lVar2 + 0x722508);
  }
  lVar2 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_58);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  return;
}


