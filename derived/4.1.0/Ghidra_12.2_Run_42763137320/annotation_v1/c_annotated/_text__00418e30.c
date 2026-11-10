/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00318E30
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00418e30; name: FUN_.text__00418e30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00418e30(undefined8 param_1,ulong param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_a0 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_90 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_80 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_70 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar1 = _DAT_008a4d88; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((int)_DAT_008a4d88[1] != 0) { // [自动静态注释] 条件判断/分支
    plVar7 = (long *)*_DAT_008a4d88; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((param_2 & 1) == 0) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        lVar6 = *plVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(lVar6 + 0x14c) = 0x2c;
        if (*(int *)(lVar6 + 0xf8) == 1) { // [自动静态注释] 条件判断/分支
          FUN__text__0044e400(lVar6,lVar6 + 0x120); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
        (**(code **)(**(long **)(lVar6 + 0xe0) + 0xf0))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        plVar7 = plVar7 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (plVar7 != (long *)(*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 8)); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      do { // [自动静态注释] 循环/迭代
        lVar6 = *plVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(lVar6 + 0x14c) = 0x2c;
        if ((*(int *)(lVar6 + 0xf8) == 1) && // [自动静态注释] 条件判断/分支
           (uVar4 = FUN__text__0044e400(lVar6,lVar6 + 0x120), (uVar4 & 1) != 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
          *(undefined2 *)(lVar6 + 0x132) = 0;
          *(undefined4 *)(lVar6 + 0x13c) = 0xffffffff;
          *(undefined8 *)(lVar6 + 0x134) = 0;
          *(undefined4 *)(lVar6 + 0x14c) = 0x2b;
        } // [自动静态注释] 作用域/控制流边界
        (**(code **)(**(long **)(lVar6 + 0xe0) + 0xf0))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        plVar7 = plVar7 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (plVar7 != (long *)(*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 8)); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00413d14(auStack_80,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00413d14(auStack_70,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar2 = _DAT_008a4db8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  DAT_00aea24c = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((param_2 & 1) != 0) && (lVar6 = plVar1[1], (int)lVar6 != 0)) { // [自动静态注释] 条件判断/分支
    *_DAT_008a4db8 = 0;
    uVar5 = FUN__text__00413d14(auStack_a0,1); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__004192d0(auStack_90,uVar5,*plVar1,puVar2,(int)lVar6,10); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__00413dec(auStack_80,auStack_90); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00413990(auStack_90,auStack_80,2,0x7152de,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_60 = (undefined8 *)0xffffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00412c50(&local_58,&local_60,0x10,8,0x712ad0,0,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar3 = local_60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_58 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    *local_58 = 0x887530;
  } // [自动静态注释] 作用域/控制流边界
  local_60 = (undefined8 *)0xffffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_58 = puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00413d68(param_1,&local_58,1,local_88); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


