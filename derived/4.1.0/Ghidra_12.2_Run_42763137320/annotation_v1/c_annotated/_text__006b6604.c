/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005B6604
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b6604; name: FUN_.text__006b6604
 */


void FUN__text__006b6604(undefined1 param_1 [16],undefined4 param_2,long *param_3,long param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = FUN__text__006c1bd0(param_4,*param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(uint *)(param_3 + 6) = uVar1;
  lVar3 = *(long *)(*(long *)(param_4 + 200) + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar3 == 0) goto LAB__text__006b677c; // [自动静态注释] 条件判断/分支
  lVar3 = lVar3 + (ulong)uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = param_3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((((lVar4 == 0) || ((*(byte *)(param_3 + 0x45) >> 2 & 1) != 0)) || // [自动静态注释] 条件判断/分支
      ((*(byte *)(lVar4 + 4) >> 1 & 1) == 0)) || (*(char *)((long)param_3 + 0x54) == '\0')) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_40 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__006ad654(&local_48,lVar4 + 0x18,param_3 + 2); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((*(byte *)(param_3[1] + 4) & 1) == 0) { // [自动静态注释] 条件判断/分支
      *(undefined4 *)(lVar3 + 0x90) = (undefined4)local_48;
      *(undefined4 *)(lVar3 + 0x98) = 0;
      *(undefined4 *)(lVar3 + 0x94) = local_48._4_4_;
      *(undefined4 *)(lVar3 + 0x9c) = (undefined4)local_40;
      *(undefined4 *)(lVar3 + 0xa0) = local_40._4_4_;
      *(undefined4 *)(lVar3 + 0xa8) = 0;
      *(undefined4 *)(lVar3 + 0xa4) = (undefined4)local_38;
      *(undefined4 *)(lVar3 + 0xac) = local_38._4_4_;
      lVar4 = param_3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(undefined4 *)(lVar3 + 0x70) = (undefined4)local_48;
      *(undefined4 *)(lVar3 + 0x78) = 0;
      *(undefined4 *)(lVar3 + 0x74) = local_48._4_4_;
      *(undefined4 *)(lVar3 + 0x7c) = (undefined4)local_40;
      *(undefined4 *)(lVar3 + 0x80) = local_40._4_4_;
      *(undefined4 *)(lVar3 + 0x88) = 0;
      *(undefined4 *)(lVar3 + 0x84) = (undefined4)local_38;
      *(undefined4 *)(lVar3 + 0x8c) = local_38._4_4_;
      lVar4 = param_3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (lVar4 != 0) goto LAB__text__006b6704; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
LAB__text__006b6704: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (((*(byte *)(param_3 + 0x45) >> 2 & 1) == 0) && ((*(byte *)(lVar4 + 4) >> 1 & 1) != 0)) { // [自动静态注释] 条件判断/分支
      param_2 = 0x437f0000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar5 = (float)NEON_ucvtf((uint)*(byte *)(*param_3 + 0x5a)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(float *)(lVar3 + 0xdc) = (fVar5 / 255.0) / 255.0;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  local_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(*(long *)*param_3 + 0x60))((long *)*param_3,&local_48); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  local_18 = FUN__text__006b7a20(param_3,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
  uStack_14 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0069d960(param_4,lVar3,&local_18,&local_48,1,0x76636c); // [自动静态注释] 调用尚未恢复正式名称的函数
LAB__text__006b677c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if ((param_3[0xb] != 0) || // [自动静态注释] 条件判断/分支
     (((param_3[1] != 0 && ((*(byte *)(param_3 + 0x45) >> 2 & 1) == 0)) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      (((*(byte *)(param_3[1] + 4) >> 1 & 1) != 0 && (*(char *)((long)param_3 + 0x54) == '\0')))))) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  { // [自动静态注释] 作用域/控制流边界
    uVar2 = FUN__text__006c1bd0(param_4,*param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)(param_3 + 10) = uVar2;
    FUN__text__006b7b30(param_3,param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


