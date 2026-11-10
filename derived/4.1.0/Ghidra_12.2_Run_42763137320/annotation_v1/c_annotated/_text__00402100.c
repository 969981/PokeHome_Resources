/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00302100
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00402100; name: FUN_.text__00402100
 */


void FUN__text__00402100(int param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar6 = FUN__text__00405b00(*(undefined4 *)(&DAT_00ae89c0 + (long)param_1 * 4)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00403d00(param_1,lVar6,0,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00405b80(*(undefined4 *)(&DAT_00ae89c0 + (long)param_1 * 4),0); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = (long)param_1 * 0x638; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(&DAT_00ae8e68 + lVar6) != 0) { // [自动静态注释] 条件判断/分支
    iVar2 = *(int *)(&DAT_00ae8e70 + (long)param_1 * 0x638); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    piVar1 = (int *)(*(long *)(&DAT_00ae8e78 + (long)param_1 * 0x638) + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
      if (bVar4) { // [自动静态注释] 条件判断/分支
        *piVar1 = *piVar1 - iVar2;
        cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
      } // [自动静态注释] 作用域/控制流边界
    } while (cVar3 != '\0'); // [自动静态注释] 循环/迭代
    *(undefined8 *)(&DAT_00ae8e70 + lVar6) = 0;
    *(undefined8 *)(&DAT_00ae8e78 + lVar6) = 0;
    *(undefined8 *)(&DAT_00ae8e68 + lVar6) = 0;
  } // [自动静态注释] 作用域/控制流边界
  lVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(&DAT_00ae8ff8 + (long)param_1 * 0x638) = 0;
  do { // [自动静态注释] 循环/迭代
    lVar5 = *(long *)(&DAT_00ae8e80 + (long)param_1 * 0x638 + lVar6 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    while (lVar5 != 0) { // [自动静态注释] 循环/迭代
      lVar7 = *(long *)(lVar5 + 0xd08); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar5 + 0xd1c) = 1;
      FUN__text__00402220(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar5 = lVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    lVar6 = lVar6 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (lVar6 != 0x2f); // [自动静态注释] 循环/迭代
  lVar6 = (long)param_1 * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00405ac0(*(undefined4 *)(&DAT_00ae89c0 + lVar6)); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined4 *)(&DAT_00ae89c0 + lVar6) = 0;
  *(undefined4 *)(&DAT_00ae89d8 + (long)param_1 * 0x638) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


