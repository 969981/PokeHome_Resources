/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00133648; name: FUN_.text__00133648
 */


bool FUN__text__00133648(long param_1,long *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  *(int *)(param_1 + 0xe0) = (int)param_2[7];
  *(undefined1 *)(param_1 + 0xe4) = *(undefined1 *)((long)param_2 + 0x4c);
  *(undefined2 *)(param_1 + 0xe6) = *(undefined2 *)((long)param_2 + 0x4e);
  *(short *)(param_1 + 0xe8) = (short)param_2[10];
  lVar3 = param_2[0xd];
  *(long *)(param_1 + 0xf0) = param_2[0xc];
  *(long *)(param_1 + 0xf8) = lVar3;
  lVar3 = *param_2;
  if (lVar3 == 0) {
    FUN__text__005f33f0(*(undefined8 *)(param_1 + 0x18));
    lVar4 = param_2[1];
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    FUN__text__005f3280();
    lVar4 = param_2[1];
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  cVar1 = lVar3 != 0;
  if (lVar4 == 0) {
    FUN__text__005f33f0(uVar2);
    lVar3 = param_2[2];
    uVar2 = *(undefined8 *)(param_1 + 0x28);
  }
  else {
    FUN__text__005f3280();
    cVar1 = cVar1 + '\x01';
    lVar3 = param_2[2];
    uVar2 = *(undefined8 *)(param_1 + 0x28);
  }
  if (lVar3 == 0) {
    FUN__text__005f33f0(uVar2);
    lVar3 = param_2[3];
    uVar2 = *(undefined8 *)(param_1 + 0x30);
  }
  else {
    FUN__text__005f3280();
    cVar1 = cVar1 + '\x01';
    lVar3 = param_2[3];
    uVar2 = *(undefined8 *)(param_1 + 0x30);
  }
  if (lVar3 == 0) {
    FUN__text__005f33f0(uVar2);
    lVar3 = param_2[4];
    uVar2 = *(undefined8 *)(param_1 + 0x38);
  }
  else {
    FUN__text__005f3280();
    cVar1 = cVar1 + '\x01';
    lVar3 = param_2[4];
    uVar2 = *(undefined8 *)(param_1 + 0x38);
  }
  if (lVar3 == 0) {
    FUN__text__005f33f0(uVar2);
    lVar3 = param_2[5];
    uVar2 = *(undefined8 *)(param_1 + 0x40);
  }
  else {
    FUN__text__005f3280();
    cVar1 = cVar1 + '\x01';
    lVar3 = param_2[5];
    uVar2 = *(undefined8 *)(param_1 + 0x40);
  }
  if (lVar3 == 0) {
    FUN__text__005f33f0(uVar2);
    lVar3 = param_2[6];
    uVar2 = *(undefined8 *)(param_1 + 0x48);
  }
  else {
    FUN__text__005f3280();
    cVar1 = cVar1 + '\x01';
    lVar3 = param_2[6];
    uVar2 = *(undefined8 *)(param_1 + 0x48);
  }
  if (lVar3 == 0) {
    FUN__text__005f33f0(uVar2);
    return cVar1 != '\0';
  }
  FUN__text__005f3280();
  return true;
}


