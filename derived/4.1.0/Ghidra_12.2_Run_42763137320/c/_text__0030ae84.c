/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0030ae84; name: FUN_.text__0030ae84
 */


int FUN__text__0030ae84(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_8;
  
  local_8 = param_2;
  if ((*(long *)(param_1 + 0x1868) != 0) &&
     (iVar1 = FUN__text__005dc7a0(*(long *)(param_1 + 0x1868),&local_8), -1 < iVar1)) {
    return iVar1;
  }
  if ((*(long *)(param_1 + 0x1978) != 0) &&
     (iVar1 = FUN__text__005dc7a0(*(long *)(param_1 + 0x1978),&local_8), -1 < iVar1)) {
    return iVar1 + 0x80;
  }
  if ((*(long *)(param_1 + 0x1a88) != 0) &&
     (iVar1 = FUN__text__005dc7a0(*(long *)(param_1 + 0x1a88),&local_8), -1 < iVar1)) {
    return iVar1 + 0x180;
  }
  if ((*(long *)(param_1 + 0x1b98) != 0) &&
     (iVar1 = FUN__text__005dc7a0(*(long *)(param_1 + 0x1b98),&local_8), -1 < iVar1)) {
    return iVar1 + 0x280;
  }
  if ((*(long *)(param_1 + 0x1ca8) != 0) &&
     (iVar1 = FUN__text__005dc7a0(*(long *)(param_1 + 0x1ca8),&local_8), -1 < iVar1)) {
    return iVar1 + 0x880;
  }
  if ((*(long *)(param_1 + 0x1db8) != 0) &&
     (iVar1 = FUN__text__005dc7a0(*(long *)(param_1 + 0x1db8),&local_8), -1 < iVar1)) {
    return iVar1 + 0xa80;
  }
  if ((*(long *)(param_1 + 0x1ec8) != 0) &&
     (iVar1 = FUN__text__005dc7a0(*(long *)(param_1 + 0x1ec8),&local_8), -1 < iVar1)) {
    return iVar1 + 0xe80;
  }
  if ((*(long *)(param_1 + 0x1fd8) == 0) ||
     (iVar1 = FUN__text__005dc7a0(*(long *)(param_1 + 0x1fd8),&local_8), iVar1 < 0)) {
    return -1;
  }
  return iVar1 + 0xf00;
}


