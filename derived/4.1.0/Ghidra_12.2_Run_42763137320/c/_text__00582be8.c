/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00582be8; name: FUN_.text__00582be8
 */


void FUN__text__00582be8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  ushort uVar3;
  undefined4 uVar4;
  code *pcVar5;
  uint uVar6;
  
  cVar2 = *(char *)(param_1 + 0x3c);
  uVar3 = *(ushort *)(param_2 + 2);
  uVar6 = (uint)uVar3;
  if (cVar2 != '\0') {
    uVar6 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x10);
    if (uVar3 <= uVar6) {
      uVar6 = (uint)uVar3;
    }
  }
  if (uVar6 != 0) {
    pcVar5 = *(code **)(param_1 + 0x88);
    plVar1 = (long *)(param_1 + ((long)*(ulong *)(param_1 + 0x90) >> 1));
    if ((*(ulong *)(param_1 + 0x90) & 1) != 0) {
      pcVar5 = *(code **)(pcVar5 + *plVar1);
    }
    (*pcVar5)(plVar1,*param_2,uVar6);
    *(short *)((long)param_2 + 0x12) = (short)uVar6;
    cVar2 = *(char *)(param_1 + 0x3c);
  }
  uVar4 = 0x2d;
  if (cVar2 != '\0' && *(uint *)(param_1 + 0x18) <= *(uint *)(param_1 + 0x10)) {
    uVar4 = 0x11;
  }
  *(undefined4 *)((long)param_2 + 0xc) = uVar4;
  return;
}


