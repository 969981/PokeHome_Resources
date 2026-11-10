/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00490480
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00590480; name: FUN_.text__00590480
 */


void FUN__text__00590480(long param_1,undefined8 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_40 = param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_38 = param_2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_30 = param_2[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_28 = param_2[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_48 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar4 = *(short *)(param_1 + 0x5c) != 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piVar2 = (int *)(param_1 + 0x34); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (bVar4) { // [自动静态注释] 条件判断/分支
    piVar2 = (int *)(param_1 + 0xdc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  iVar3 = *piVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (bVar4) { // [自动静态注释] 条件判断/分支
    iVar1 = *(int *)(param_1 + 0xd4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)(param_1 + 0xcc) = 1;
  *(int *)(param_1 + 200) =
       (*(int *)(param_1 + 0x118) + iVar1 + iVar3) - (int)*(undefined8 *)(param_1 + 0x110); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__0058f2e0(param_1 + 0x60,*(undefined2 *)(param_1 + 0xe4), // [自动静态注释] 调用尚未恢复正式名称的函数
                      *(undefined8 *)(param_1 + 0x110),param_1 + 0x120,param_1 + 0x128);
  uStack_28 = CONCAT44(*(int *)(param_1 + 100),(undefined4)uStack_28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(int *)(param_1 + 100) != 2) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x60);
    *(ulong *)(param_1 + 0x110) = *(long *)(param_1 + 0x110) + (ulong)*(uint *)(param_1 + 0x6c);
    FUN__text__004ddbe4(param_1 + 8,*(undefined8 *)(param_1 + 0x120),*(undefined4 *)(param_1 + 0x60) // [自动静态注释] 调用尚未恢复正式名称的函数
                        ,*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xc0),&local_50); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *param_2 = local_50;
  param_2[1] = uStack_48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_2 + 2) = (undefined4)local_40;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


