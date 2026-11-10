/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00491358
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00591358; name: FUN_.text__00591358
 */


undefined8 FUN__text__00591358(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar4 = *(uint *)(param_1 + 0xe0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = *(uint *)(param_1 + 200); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = uVar5 - uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar4 <= uVar5 && uVar3 != 0) { // [自动静态注释] 条件判断/分支
    uVar2 = *(uint *)(param_1 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar3 <= *(uint *)(param_1 + 0x68)) { // [自动静态注释] 条件判断/分支
      uVar2 = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (uVar2 != 0) { // [自动静态注释] 条件判断/分支
      memcpy((void *)(*(long *)(param_1 + 0xc0) + (ulong)uVar4),*(void **)(param_1 + 0x60), // [自动静态注释] 内存复制、清零或移动
             (ulong)uVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar4 = *(int *)(param_1 + 0xe0) + uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(ulong *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + (ulong)uVar2;
      uVar5 = *(uint *)(param_1 + 200); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(uint *)(param_1 + 0xe0) = uVar4;
      *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) - uVar2;
      *(uint *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + uVar2;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (uVar4 != uVar5) { // [自动静态注释] 条件判断/分支
    return 0x3f; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  iVar1 = *(int *)(param_1 + 0x30) + uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)(param_1 + 0x78) = iVar1;
  if (*(short *)(param_1 + 0x54) == 1) { // [自动静态注释] 条件判断/分支
    *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xb0) + -1;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar5 = *(uint *)(param_1 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar5 != 0) { // [自动静态注释] 条件判断/分支
      uVar4 = *(uint *)(param_1 + 0x34) / uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x9c) + iVar1;
    uVar3 = *(int *)(param_1 + 0xb0) - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar3 <= uVar4) { // [自动静态注释] 条件判断/分支
      uVar4 = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(uint *)(param_1 + 0xa8) = uVar4;
    if (*(uint *)(param_1 + 0x38) != *(int *)(param_1 + 0x24) - 1U) { // [自动静态注释] 条件判断/分支
      uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar5 != 0) { // [自动静态注释] 条件判断/分支
        uVar4 = *(uint *)(param_1 + 0x38) / uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      if (uVar3 <= uVar4) { // [自动静态注释] 条件判断/分支
        uVar4 = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(uint *)(param_1 + 0xac) = uVar4;
      *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0xa0) + iVar1;
      return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    *(uint *)(param_1 + 0xac) = uVar3;
  } // [自动静态注释] 作用域/控制流边界
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x30);
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


