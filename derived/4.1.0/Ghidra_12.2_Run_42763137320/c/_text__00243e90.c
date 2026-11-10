/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00243e90; name: FUN_.text__00243e90
 */


void FUN__text__00243e90(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_38;
  
  local_38 = 0xb80a4302360d9d80;
  lVar1 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),&local_38);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  }
  local_38 = 0x6ed222255d5cc02f;
  lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_38);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  local_38 = 0xd17179f08793549f;
  lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_38);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 1;
  local_38 = 0xbe629e44d60a57cc;
  lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_38);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  local_38 = 0x8a10f848eef0c665;
  lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_38);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 1;
  local_38 = 0xaa2b60ebb0d90ea4;
  lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_38);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  local_38 = 0xcd97e60bf719a9d5;
  lVar1 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),&local_38);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  }
  lVar1 = *(long *)(param_1 + 0x6d0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  local_38 = 0x7e9e8851f76b5e9f;
  lVar3 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar1,&local_38,lVar3);
  uVar2 = FUN__text__005f3244(lVar3);
  FUN__text__0012c9f0(param_1 + 0x110,0x72bcf8,uVar2,0xb);
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  FUN__text__00245e28(param_1,0x5355c25307476181,0x7e9e8751f76b5cec);
  return;
}


