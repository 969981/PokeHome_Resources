/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00345CB0
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00445cb0; name: FUN_.text__00445cb0
 */


void FUN__text__00445cb0(long param_1,long param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(long *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 8) = 1;
  *(long *)(param_1 + 0x20) = param_3;
  *(undefined2 *)(param_1 + 0x28) = 0xff00;
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xf0;
  if (param_2 != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__004470f0(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_3 = *(long *)(param_1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (param_3 != 0) { // [自动静态注释] 条件判断/分支
    piVar1 = (int *)(param_3 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
      if (bVar3) { // [自动静态注释] 条件判断/分支
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
      } // [自动静态注释] 作用域/控制流边界
    } while (cVar2 != '\0'); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


