/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0038DFF0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048dff0; name: FUN_.text__0048dff0
 */


void FUN__text__0048dff0(long *param_1,uint param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  nn::os::LockMutex((MutexType *)(param_1 + 3)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar4 = *(uint *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar4 != 0) { // [自动静态注释] 条件判断/分支
    uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar4 != 0) { // [自动静态注释] 条件判断/分支
      uVar1 = param_2 / uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    for (lVar6 = *(long *)(*param_1 + (ulong)(param_2 - uVar1 * uVar4) * 8); lVar6 != 0; // [自动静态注释] 循环/迭代
        lVar6 = *(long *)(lVar6 + 0x68)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(uint *)(lVar6 + 0x4c) == param_2) { // [自动静态注释] 条件判断/分支
        plVar3 = *(long **)(lVar6 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar4 = *(uint *)(lVar6 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar2 = plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (uVar4 == 0) goto LAB__text__0048e0a0; // [自动静态注释] 条件判断/分支
        lVar5 = (ulong)uVar4 << 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        goto LAB__text__0048e080; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  nn::os::UnlockMutex((MutexType *)(param_1 + 3)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
LAB__text__0048e0a0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (plVar2 != plVar3 + uVar4) { // [自动静态注释] 条件判断/分支
    uVar4 = uVar4 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar2 < plVar3 + uVar4) { // [自动静态注释] 条件判断/分支
      memmove(plVar2,plVar2 + 1,(ulong)(uint)((int)(plVar3 + uVar4) - (int)plVar2) & 0xfffffff8); // [自动静态注释] 内存复制、清零或移动
      uVar4 = *(int *)(lVar6 + 0x18) - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(uint *)(lVar6 + 0x18) = uVar4;
  } // [自动静态注释] 作用域/控制流边界
  goto LAB__text__0048e0d8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  while( true ) { // [自动静态注释] 循环/迭代
    plVar2 = plVar2 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar5 = lVar5 + -8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar5 == 0) break; // [自动静态注释] 条件判断/分支
LAB__text__0048e080: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*plVar2 == param_3) goto LAB__text__0048e0a0; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
LAB__text__0048e0d8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__0048d040(param_1,param_2,lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


