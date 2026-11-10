/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000C5DD4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c5dd4; name: FUN_.text__001c5dd4
 */


void FUN__text__001c5dd4(long param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar7 = *(long *)(param_1 + 8) + 0x110; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x370); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(lVar6 + 0x108) = 0;
    *(undefined1 *)(lVar6 + 0x110) = 0;
  } // [自动静态注释] 作用域/控制流边界
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x3e0); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(lVar6 + 0x108) = 0;
    *(undefined1 *)(lVar6 + 0x110) = 0;
  } // [自动静态注释] 作用域/控制流边界
  lVar7 = FUN__text__0012cb14(lVar7,param_1 + 0x450); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar7 != 0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(lVar7 + 0x108) = 0;
    *(undefined1 *)(lVar7 + 0x110) = 0;
  } // [自动静态注释] 作用域/控制流边界
  lVar7 = *(long *)(param_1 + 8) + 0x110; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x2d0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar8 = FUN__text__0012cb14(lVar7,param_1 + 0x1a0); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar9 = FUN__text__0012cb14(lVar7,param_1 + 0x210); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar10 = FUN__text__0012cb14(lVar7,param_1 + 0x288); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar7 = FUN__text__0012cb14(lVar7,param_1 + 0x2f8); // [自动静态注释] 调用尚未恢复正式名称的函数
  bVar5 = (param_2 & 1) == 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = 0x800000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (bVar5) { // [自动静态注释] 条件判断/分支
    uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = 0x400000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (bVar5) { // [自动静态注释] 条件判断/分支
    uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (bVar5) { // [自动静态注释] 条件判断/分支
    uVar3 = 0x100000000000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (bVar5) { // [自动静态注释] 条件判断/分支
    uVar4 = 0x400000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__003c7c60(lVar6,param_1 + 0x198,param_2 & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003c7c60(lVar6,param_1 + 0x280,(param_2 ^ 0xffffffff) & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(lVar8 + 0x108) = uVar1;
  *(undefined1 *)(lVar8 + 0x110) = 0;
  *(undefined8 *)(lVar9 + 0x108) = uVar2;
  *(undefined1 *)(lVar9 + 0x110) = 0;
  *(undefined8 *)(lVar10 + 0x108) = uVar3;
  *(undefined1 *)(lVar10 + 0x110) = 0;
  *(undefined8 *)(lVar7 + 0x108) = uVar4;
  *(undefined1 *)(lVar7 + 0x110) = 0;
  if (lVar6 == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x001c5f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


