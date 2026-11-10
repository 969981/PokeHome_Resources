/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005B8BB0
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b8bb0; name: FUN_.text__006b8bb0
 */


void FUN__text__006b8bb0(undefined8 *param_1,long param_2,uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char cVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(char *)(param_1 + 0x13) == '\0') { // [自动静态注释] 条件判断/分支
    lVar8 = *(long *)(*(long *)(param_2 + 0xb8) + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = FUN__text__006c1bd0(param_2,*param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar4 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)((long)param_1 + (ulong)param_3 * 4 + 0x9c) = uVar3;
    uVar3 = FUN__text__006c1bd0(param_2,uVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)((long)param_1 + (ulong)param_3 * 4 + 0xa8) = uVar3;
    pbVar6 = *(byte **)(param_2 + 200); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar5 = lVar8 + 0xdfU & -lVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((*pbVar6 & 1) == 0) { // [自动静态注释] 条件判断/分支
      lVar8 = *(long *)(pbVar6 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(ulong *)(pbVar6 + 0x40) = lVar8 + uVar5;
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      plVar7 = *(long **)(pbVar6 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        lVar8 = *plVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        cVar1 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
        if (bVar2) { // [自动静态注释] 条件判断/分支
          *plVar7 = lVar8 + uVar5;
          cVar1 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
        } // [自动静态注释] 作用域/控制流边界
      } while (cVar1 != '\0'); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    *(int *)((long)param_1 + (ulong)param_3 * 4 + 0xc0) = (int)lVar8;
  } // [自动静态注释] 作用域/控制流边界
  if (((param_1[0xb] != 0) && ((*(byte *)(param_1 + 0x45) >> 2 & 1) == 0)) && // [自动静态注释] 条件判断/分支
     ((*(byte *)(param_1[0xb] + 8) >> 5 & 1) != 0)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar3 = FUN__text__006c1bd0(param_2,*param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)((long)param_1 + (ulong)param_3 * 4 + 0xb4) = uVar3;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


