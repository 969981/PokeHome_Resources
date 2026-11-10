/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000A3EB4
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a3eb4; name: thunk_FUN_.text__001a3d2c
 */


void thunk_FUN__text__001a3d2c(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_118 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_110 [184]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_58 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar4 = *(long *)(param_1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar9 = *(long *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar5 = *(long *)(lVar4 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar6 = *(long *)(lVar9 + 0x2d0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(uint *)(lVar5 + 0x2c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *(uint *)(lVar5 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = *(long *)(lVar4 + (ulong)(*(int *)(lVar4 + 0x1b0) != *(int *)(lVar5 + 0x24) && // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                                   *(int *)(lVar4 + 0x1b4) == *(int *)(lVar5 + 0x24)) * 0x20 + 0x68)
  ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar7 = *(undefined8 *)(lVar9 + 0x2d0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  memcpy(auStack_118,(void *)(lVar4 + (ulong)uVar1 * 1000 + (ulong)uVar2 * 200 + 0x42d0),200); // [自动静态注释] 内存复制、清零或移动
  uVar7 = FUN__text__003c79c0(uVar7,auStack_118); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar3 = FUN__text__003c79c0(*(undefined8 *)(lVar9 + 0x2d0),auStack_110); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003c8320(lVar6,auStack_110); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006b2dd0(uVar7,uVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003c7960(lVar6,auStack_110,auStack_58); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x2d0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar4 == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__003c7c60(0,param_1 + 0x80,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__003c7c60(0,param_1 + 0x188,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar8 = (long *)(lVar4 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (**(code **)(*plVar8 + 0x10))(plVar8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__003c7c60(lVar4,param_1 + 0x80,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__003c7c60(lVar4,param_1 + 0x188,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    (**(code **)(*plVar8 + 0x18))(plVar8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0012c378(lVar9 + 0x110,param_1 + 0x208); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(param_1 + 0x284) = 0;
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


