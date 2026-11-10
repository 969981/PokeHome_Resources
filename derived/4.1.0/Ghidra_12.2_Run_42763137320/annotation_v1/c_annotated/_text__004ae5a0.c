/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003AE5A0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ae5a0; name: FUN_.text__004ae5a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__004ae5a0(long *param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_2c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = (**(code **)(*(long *)param_1[8] + 0x30))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(uint *)(param_1 + 6) = uVar2;
  if (uVar2 == 0) { // [自动静态注释] 条件判断/分支
    return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = *(uint *)((long)param_1 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = param_1[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 < uVar2) { // [自动静态注释] 条件判断/分支
    if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar2 = *(uint *)(param_1 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (uVar2 <= *(uint *)(_DAT_008a45b0 + 0x88)) { // [自动静态注释] 条件判断/分支
      uVar2 = *(uint *)(_DAT_008a45b0 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(uint *)((long)param_1 + 0x24) = uVar2;
    lVar4 = FUN__text__00400f90(0,uVar2 << 1,0x20); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_1[5] = lVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar4 == 0) { // [自动静态注释] 条件判断/分支
      return 0x34; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar1 = *(uint *)((long)param_1 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *param_1 = lVar4;
  param_1[1] = lVar4 + (ulong)uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_2 == 0) { // [自动静态注释] 条件判断/分支
    return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  local_28 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = (**(code **)(*(long *)param_1[8] + 0x50))((long *)param_1[8],param_2,0,&local_28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((int)uVar3 == 1) { // [自动静态注释] 条件判断/分支
    param_2 = param_2 - (int)local_28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = FUN__text__004ae7a0(param_1,param_2,&local_2c); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (local_2c != param_2) { // [自动静态注释] 条件判断/分支
      uVar2 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar3 = (ulong)uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


