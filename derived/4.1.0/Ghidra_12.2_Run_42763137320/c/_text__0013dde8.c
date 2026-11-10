/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0013dde8; name: FUN_.text__0013dde8
 */


void FUN__text__0013dde8(long param_1,uint param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 local_28;
  
  if (*(int *)(param_1 + 0x64c) == 1) {
    local_28 = *(undefined8 *)((ulong)param_2 * 8 + 0x724140);
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_28);
    if (lVar1 == 0) goto LAB__text__0013e068;
    uVar4 = (ulong)param_2;
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_28 = *(undefined8 *)(uVar4 * 8 + 0x724178);
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_28);
    if (lVar1 == 0) goto LAB__text__0013e068;
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_28 = *(undefined8 *)(uVar4 * 8 + 0x7241b0);
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_28);
    if (lVar1 == 0) goto LAB__text__0013e068;
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_28 = *(undefined8 *)(uVar4 * 8 + 0x723ab8);
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_28);
    if (lVar1 == 0) goto LAB__text__0013e068;
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_28 = *(undefined8 *)(uVar4 * 8 + 0x724258);
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_28);
    if (lVar1 == 0) goto LAB__text__0013e068;
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_28 = *(undefined8 *)(uVar4 * 8 + 0x7241e8);
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_28);
    if (lVar1 == 0) goto LAB__text__0013e068;
    bVar2 = *(byte *)(lVar1 + 0x58);
    lVar3 = 0x724290;
  }
  else {
    if (*(int *)(param_1 + 0x64c) != 0) {
      return;
    }
    local_28 = *(undefined8 *)((ulong)param_2 * 8 + 0x723d90);
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_28);
    if (lVar1 == 0) goto LAB__text__0013e068;
    uVar4 = (ulong)param_2;
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_28 = *(undefined8 *)(uVar4 * 8 + 0x723e20);
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_28);
    if (lVar1 == 0) goto LAB__text__0013e068;
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_28 = *(undefined8 *)(uVar4 * 8 + 0x723e78);
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_28);
    if (lVar1 == 0) goto LAB__text__0013e068;
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_28 = *(undefined8 *)(uVar4 * 8 + 0x723ed0);
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_28);
    if (lVar1 == 0) goto LAB__text__0013e068;
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_28 = *(undefined8 *)(uVar4 * 8 + 0x723f28);
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_28);
    if (lVar1 == 0) goto LAB__text__0013e068;
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_28 = *(undefined8 *)(uVar4 * 8 + 0x723fd8);
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_28);
    if (lVar1 == 0) goto LAB__text__0013e068;
    bVar2 = *(byte *)(lVar1 + 0x58);
    lVar3 = 0x724088;
  }
  *(byte *)(lVar1 + 0x58) = bVar2 & 0xfe;
  local_28 = *(undefined8 *)(lVar3 + (ulong)param_2 * 8);
  lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_28);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    return;
  }
LAB__text__0013e068:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


