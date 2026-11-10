/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005BB710
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006bb710; name: FUN_.text__006bb710
 */


void FUN__text__006bb710(long param_1,long param_2,undefined8 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar8 = *(long *)(param_1 + 0xd8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((lVar8 == 0) || ((**(byte **)(param_2 + 200) >> 1 & 1) != 0)) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (3 < *(byte *)(param_1 + 0xf0)) { // [自动静态注释] 条件判断/分支
    uVar5 = FUN__text__0069de6c(param_2,*(undefined8 *)(lVar8 + 0x20),*(undefined2 *)(lVar8 + 0x4a)) // [自动静态注释] 调用尚未恢复正式名称的函数
    ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if ((uVar5 & 1) != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__006b0fdc(*(undefined8 *)(param_1 + 0xd8),param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__006af484(*(undefined8 *)(param_1 + 0xd8),param_2,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
    plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                     (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_48 = plVar1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_50 = *plVar1 + *(long *)(*(long *)(param_1 + 0xf8) + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = FUN__text__006eb7a0(*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18)); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar7 = FUN__text__006eb7cc(*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18)); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006ed12c(param_3,0,&local_50,uVar6,uVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(byte *)(param_2 + 0x194) = *(byte *)(param_2 + 0x194) | 0x40;
    FUN__text__006b09e8(*(undefined8 *)(param_1 + 0xd8),param_3,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((*(byte *)(param_1 + 0x62) >> 1 & 1) != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__006b4e74(param_1,param_3,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                     (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_48 = plVar1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_50 = *plVar1 + *(long *)(*(long *)(param_1 + 0xf8) + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = FUN__text__006eb7e4(*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18)); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar3 = FUN__text__006eb7f4(*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18)); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006eca30(param_3,3,uVar2,&local_50,uVar3,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if ((*(byte *)(param_1 + 0x62) >> 2 & 1) != 0) { // [自动静态注释] 条件判断/分支
    lVar8 = FUN__text__006b27a8(param_1,0x12); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar8 != 0) { // [自动静态注释] 条件判断/分支
      lVar4 = FUN__text__006b253c(param_1,6); // [自动静态注释] 调用尚未恢复正式名称的函数
      if ((((*(byte *)(param_1 + 0x62) >> 1 & 1) == 0) && ((*(byte *)(lVar4 + 4) >> 4 & 1) != 0)) && // [自动静态注释] 条件判断/分支
         (0.0 < *(float *)(lVar4 + 0xdc))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        FUN__text__006bb5a0(param_1,param_2,param_3,lVar4,lVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      if ((*(byte *)(lVar4 + 4) & 0x9f) == 0x90) { // [自动静态注释] 条件判断/分支
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__0069db40(param_3,param_2,*(undefined8 *)(param_1 + 0xd8)); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__006af484(*(undefined8 *)(param_1 + 0xd8),param_2,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
      plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                       (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      local_48 = plVar1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_50 = *plVar1 + (ulong)*(uint *)(lVar8 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (-1 < *(int *)(lVar8 + 4)) { // [自动静态注释] 条件判断/分支
        FUN__text__006ee1d4(param_3,*(int *)(lVar8 + 4),4,&local_50,0x120); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      if ((*(byte *)(param_1 + 0x62) >> 1 & 1) != 0) { // [自动静态注释] 条件判断/分支
        FUN__text__006b4e74(param_1,param_3,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__0069dbb0(param_3,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    lVar8 = *(long *)(param_1 + 0xd8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0069db40(param_3,param_2,lVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006af484(*(undefined8 *)(param_1 + 0xd8),param_2,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((*(byte *)(param_1 + 0x62) >> 1 & 1) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__006b4e74(param_1,param_3,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0069dbb0(param_3,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


