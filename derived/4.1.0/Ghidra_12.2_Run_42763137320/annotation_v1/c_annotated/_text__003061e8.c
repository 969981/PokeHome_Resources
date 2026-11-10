/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002061E8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003061e8; name: FUN_.text__003061e8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003061e8(long *param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  param_1[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = _DAT_0089f690; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = uVar1 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = lVar2 + 0x10;
  lVar3 = _DAT_008a2a18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 != 0) { // [自动静态注释] 条件判断/分支
    if (*(long *)(uVar1 + 0x98) == 0) { // [自动静态注释] 条件判断/分支
      lVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar2 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined2 *)((long)param_1 + 0x54) = 0;
  *(undefined1 *)((long)param_1 + 0x56) = 0;
  param_1[0xb] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xc] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xd] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xe] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x11] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x12) = 3;
  param_1[0x14] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined2 *)(param_1 + 0x15) = 0;
  param_1[9] = lVar3 + 0x48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  *param_1 = lVar3 + 0x10;
  param_1[1] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xf] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_28 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__002a32ac(&local_30,param_2,&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (param_1[0xb] != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  param_1[0xb] = local_30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar3 = *(long *)(lVar2 + 0x7a070); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar2 + 0x7a070) = lVar3 + 1;
  param_1[0xc] = lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x12) = 3;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


