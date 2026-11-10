/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00482630; name: FUN_.text__00482630
 */


void FUN__text__00482630(float param_1,float param_2,undefined8 param_3,ulong param_4)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  cVar1 = *(char *)((param_4 & 0xffffffff) + 0x73b748);
  fVar2 = cosf(param_2);
  fVar3 = sinf(param_1);
  fVar4 = sinf(param_2);
  fVar5 = cosf(param_1);
  FUN__text__00481ed0(fVar2 * fVar3,fVar4,fVar2 * fVar5,cVar1 + 1,1,param_3);
  return;
}


