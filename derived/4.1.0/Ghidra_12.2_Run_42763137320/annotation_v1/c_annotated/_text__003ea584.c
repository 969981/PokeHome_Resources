/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002EA584
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ea584; name: FUN_.text__003ea584
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003ea584(long *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_2 != 0) { // [自动静态注释] 条件判断/分支
    lVar1 = param_2 + 0x48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005a7b0c(param_1,lVar1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar5 = _DAT_008a52e0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = _DAT_008a52e0 + 0x10;
  param_1[9] = lVar5 + 0x68; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[10] = lVar5 + 0xa8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar8 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar8 = uVar8 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar8 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
    plVar7 = (long *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long **)(uVar8 + 0x18 + *(long *)(uVar8 + 0x98) * 8) = plVar7;
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
    lVar5 = (**(code **)(*plVar7 + 0x10))(plVar7,0x2f0,0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar5 == 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*plVar7 + 0xb8))(plVar7); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__005e217c(lVar5,lVar1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(long **)(lVar5 + 8) = plVar7;
    *(long *)(lVar5 + 0x10) = lVar5;
    *(undefined8 *)(lVar5 + 0x18) = 0x2f0;
    *(undefined8 *)(lVar5 + 0x20) = 0x10;
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
    FUN__text__005e706c(lVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))((long *)(lVar5 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    pcVar6 = *(code **)(lVar5 + 0x278); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (pcVar6 != (code *)0x0) { // [自动静态注释] 条件判断/分支
      *(undefined8 *)(lVar5 + 0x280) = 0;
      *(undefined8 *)(lVar5 + 0x288) = 0;
      *(undefined8 *)(lVar5 + 0x270) = 0;
      *(undefined8 *)(lVar5 + 0x278) = 0;
      (*pcVar6)(lVar5 + 0x290); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    uVar2 = _DAT_008a52e8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(lVar5 + 0x290) = param_2;
    uVar4 = _DAT_008a52f8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = _DAT_008a52f0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(lVar5 + 0x270) = uVar2;
    *(undefined8 *)(lVar5 + 0x278) = uVar3;
    uVar2 = _DAT_008a5300; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(lVar5 + 0x280) = uVar4;
    *(undefined8 *)(lVar5 + 0x288) = uVar2;
    local_38 = lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__005e733c(param_1,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (local_38 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (*(long *)(uVar8 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
      plVar7 = (long *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long **)(uVar8 + 0x18 + *(long *)(uVar8 + 0x98) * 8) = plVar7;
      *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
      lVar5 = (**(code **)(*plVar7 + 0x10))(plVar7,0x2f0,0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar5 == 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*plVar7 + 0xb8))(plVar7); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__005e217c(lVar5,lVar1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(long **)(lVar5 + 8) = plVar7;
      *(long *)(lVar5 + 0x10) = lVar5;
      *(undefined8 *)(lVar5 + 0x18) = 0x2f0;
      *(undefined8 *)(lVar5 + 0x20) = 0x10;
      *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
      FUN__text__005e706c(lVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))((long *)(lVar5 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      pcVar6 = *(code **)(lVar5 + 0x278); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (pcVar6 != (code *)0x0) { // [自动静态注释] 条件判断/分支
        *(undefined8 *)(lVar5 + 0x280) = 0;
        *(undefined8 *)(lVar5 + 0x288) = 0;
        *(undefined8 *)(lVar5 + 0x270) = 0;
        *(undefined8 *)(lVar5 + 0x278) = 0;
        (*pcVar6)(lVar5 + 0x290); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      uVar2 = _DAT_008a5308; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(lVar5 + 0x290) = param_2;
      uVar4 = _DAT_008a5318; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = _DAT_008a5310; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(lVar5 + 0x270) = uVar2;
      *(undefined8 *)(lVar5 + 0x278) = uVar3;
      uVar2 = _DAT_008a5320; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(lVar5 + 0x280) = uVar4;
      *(undefined8 *)(lVar5 + 0x288) = uVar2;
      local_58 = lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__005e7474(param_1,&local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (local_58 != 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      *(undefined4 *)(param_1 + 0x4d) = 0;
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
} // [自动静态注释] 作用域/控制流边界


