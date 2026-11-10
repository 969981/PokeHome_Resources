/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005B67DC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b67dc; name: FUN_.text__006b67dc
 */


void FUN__text__006b67dc(long *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fStack_3c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = FUN__text__006c1bd0(param_2,*param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)((long)param_1 + 0xcc) = 0xffffffffffffffff;
  *(undefined4 *)((long)param_1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1b) = uVar2;
  lVar3 = param_1[0xb]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = (uint)*(byte *)(lVar3 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((*(byte *)(lVar3 + 8) & 1) != 0) && (0.0 < *(float *)(lVar3 + 0x30))) { // [自动静态注释] 条件判断/分支
    uVar2 = FUN__text__006b8838(param_1,param_2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar3 = param_1[0xb]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)((long)param_1 + 0xcc) = uVar2;
    uVar4 = (uint)*(byte *)(lVar3 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (((uVar4 >> 1 & 1) != 0) && (0.0 < *(float *)(lVar3 + 0x40))) { // [自动静态注释] 条件判断/分支
    uVar2 = FUN__text__006b8838(param_1,param_2,1); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar3 = param_1[0xb]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(param_1 + 0x1a) = uVar2;
    uVar4 = (uint)*(byte *)(lVar3 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (((uVar4 >> 2 & 1) == 0) || (*(float *)(lVar3 + 0x58) <= 0.0)) { // [自动静态注释] 条件判断/分支
    lVar5 = *(long *)(*(long *)(param_2 + 200) + 0x38) + (ulong)*(uint *)(param_1 + 0x1b); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar1 = *(byte *)(param_1 + 0x45); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar2 = FUN__text__006b8838(param_1,param_2,2); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)((long)param_1 + 0xd4) = uVar2;
    lVar3 = param_1[0xb]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar5 = *(long *)(*(long *)(param_2 + 200) + 0x38) + (ulong)*(uint *)(param_1 + 0x1b); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar3 == 0) goto LAB__text__006b68f8; // [自动静态注释] 条件判断/分支
    bVar1 = *(byte *)(param_1 + 0x45); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (((bVar1 >> 2 & 1) == 0) && ((*(byte *)(lVar3 + 8) >> 5 & 1) != 0)) { // [自动静态注释] 条件判断/分支
    fVar6 = (float)NEON_ucvtf((uint)*(byte *)(*param_1 + 0x5a)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(float *)(lVar5 + 0xdc) = (fVar6 / 255.0) / 255.0;
  } // [自动静态注释] 作用域/控制流边界
LAB__text__006b68f8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,&local_38); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  local_40 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fStack_3c = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(*(long *)*param_1 + 0x68))((long *)*param_1,&local_40); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  local_18 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,&local_18); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar3 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar1 = *(byte *)(lVar3 + 0x5b) & 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = ((float)local_18 - *(float *)(lVar3 + 0x50)) * 0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (bVar1 == 2) { // [自动静态注释] 条件判断/分支
    local_40 = fVar6 + local_40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else if (bVar1 == 1) { // [自动静态注释] 条件判断/分支
    local_40 = local_40 - fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  bVar1 = *(byte *)(lVar3 + 0x5b) >> 2 & 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = (local_18._4_4_ - *(float *)(lVar3 + 0x54)) * 0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (bVar1 == 2) { // [自动静态注释] 条件判断/分支
    fStack_3c = fStack_3c - fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else if (bVar1 == 1) { // [自动静态注释] 条件判断/分支
    fStack_3c = fVar6 + fStack_3c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0069d960(param_2,lVar5,&local_40,&local_38,1,0x76636c); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


