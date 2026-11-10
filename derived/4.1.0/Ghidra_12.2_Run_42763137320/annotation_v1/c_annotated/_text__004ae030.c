/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003AE030
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ae030; name: FUN_.text__004ae030
 */


undefined8 FUN__text__004ae030(ulong *param_1,int param_2,undefined4 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char cVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_1 = 0;
  if (param_2 < 1) { // [自动静态注释] 条件判断/分支
LAB__text__004ae0b0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar5 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    iVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar5 = 0x34; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__004ae064: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar3 = (ulong *)FUN__text__00400f80(param_3,0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (puVar3 != (ulong *)0x0) { // [自动静态注释] 条件判断/分支
      puVar3[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        uVar4 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *puVar3 = uVar4 | 1;
        while (*param_1 == uVar4) { // [自动静态注释] 循环/迭代
          cVar1 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar2) { // [自动静态注释] 条件判断/分支
            *param_1 = (ulong)puVar3;
            cVar1 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar1 == '\0') { // [自动静态注释] 条件判断/分支
            iVar6 = iVar6 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if (iVar6 == param_2) goto LAB__text__004ae0b0; // [自动静态注释] 条件判断/分支
            goto LAB__text__004ae064; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } while( true ); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return uVar5; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


