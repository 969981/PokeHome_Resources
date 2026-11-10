/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003AE940
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ae940; name: FUN_.text__004ae940
 */


long FUN__text__004ae940(long param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint local_34; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar5 = (uint *)(param_1 + (ulong)*(uint *)(param_1 + 0x20) * 4 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_2 <= uVar2) { // [自动静态注释] 条件判断/分支
    *puVar5 = uVar2 - param_2;
    lVar4 = *(long *)(param_1 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar4 == 0) { // [自动静态注释] 条件判断/分支
      lVar4 = *(long *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(ulong *)(param_1 + 0x10) = lVar4 + (ulong)param_2;
      return lVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    *(ulong *)(param_1 + 0x50) = lVar4 + (ulong)param_2;
    return lVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = uVar2 & 0x1f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar2 != 0) { // [自动静态注释] 条件判断/分支
    uVar1 = param_2 + 0x1f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar4 = FUN__text__00400f90(0,uVar1,0x20); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(param_1 + 0x38) = lVar4;
  if (lVar4 == 0) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar2 != 0) { // [自动静态注释] 条件判断/分支
    uVar1 = 0x20 - uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar4 = lVar4 + (ulong)uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar3 = FUN__text__004aea70(param_1,lVar4,param_2,&local_34,0xffffffff); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (iVar3 != 1 || local_34 != param_2) { // [自动静态注释] 条件判断/分支
    FUN__text__00400fc0(0,*(undefined8 *)(param_1 + 0x38)); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x38) = 0;
  } // [自动静态注释] 作用域/控制流边界
  return lVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


