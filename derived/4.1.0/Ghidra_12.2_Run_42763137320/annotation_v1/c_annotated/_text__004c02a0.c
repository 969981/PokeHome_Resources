/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003C02A0
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c02a0; name: FUN_.text__004c02a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN__text__004c02a0(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar7 = *(undefined8 *)(param_2 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(ushort *)(param_1 + 0x34) - 0x304 < 2) { // [自动静态注释] 条件判断/分支
    FUN__text__004bd3c8(param_1,2,uVar7,*(undefined4 *)(param_2 + 0x38)); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__004b7020(*_DAT_008a45c0,uVar7,param_1 + 0x38,*(byte *)(param_1 + 0x48) & 1, // [自动静态注释] 调用尚未恢复正式名称的函数
                        *(undefined4 *)(param_2 + 0x38));
  } // [自动静态注释] 作用域/控制流边界
  else if ((*(ushort *)(param_1 + 0x34) - 0x302 < 2) && // [自动静态注释] 条件判断/分支
          (lVar6 = FUN__text__004ba560(param_1), lVar6 != 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar5 = FUN__text__004bd0b0(param_1,2,uVar7,*(undefined4 *)(param_2 + 0x38)); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__004b5510(*_DAT_008a45c0,lVar6,uVar7,*(byte *)(param_1 + 0x48) & 1, // [自动静态注释] 调用尚未恢复正式名称的函数
                        *(undefined4 *)(param_2 + 0x38));
    piVar1 = (int *)(lVar6 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      iVar2 = *piVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
      if (bVar4) { // [自动静态注释] 条件判断/分支
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
      } // [自动静态注释] 作用域/控制流边界
    } while (cVar3 != '\0'); // [自动静态注释] 循环/迭代
    if (iVar2 + -1 == 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(lVar6 + 0x10) + 0x20))((long *)(lVar6 + 0x10)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    return uVar5; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


